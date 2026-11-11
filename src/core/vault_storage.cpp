#include "core/vault_storage.hpp"

bool deadvault::VaultStorage::file_exists(
    const std::filesystem::path& path
) const
{
    return std::filesystem::exists(path);
}

std::optional<uintmax_t> deadvault::VaultStorage::get_file_size(
    const std::filesystem::path& path
) const
{
    if (std::filesystem::exists(path) == true){
        if(std::filesystem::is_regular_file(path)){
            return std::filesystem::file_size(path);
        }
        else{
            return std::nullopt;
        }
    }
    else return std::nullopt;
}

std::optional<std::vector<unsigned char>> deadvault::VaultStorage::read_file(
    const std::filesystem::path& path
) const
{
    if (std::filesystem::exists(path)==true){
        if(std::filesystem::is_regular_file(path)){
            std::ifstream file(path, std::ios::binary);
            auto size = std::filesystem::file_size(path);
            std::vector<unsigned char> bytes(size);
            if(file.is_open()){
                file.read(
                reinterpret_cast<char *>(bytes.data()),
                static_cast<std::streamsize>(bytes.size())
                );
            if(!file){
                std::cout<<"Read failed"<<"\n";
                return std::nullopt;
                }
            file.close();               
            }
            else if(!file.is_open()){
                return std::nullopt;
            }
            return bytes;
        }
        else{
            return std::nullopt;
        }
    }
    else{
        return std::nullopt;
    }
}

bool deadvault::VaultStorage::write_file(
    const std::filesystem::path& path,
    const std::vector<unsigned char>& data
) const
{
    auto file = path.parent_path();
    if(!file.empty()){
        if(!std::filesystem::exists(file)){
        std::filesystem::create_directories(file);
        }
    }
    std::ofstream write_file(path,std::ios::binary);
    if(write_file.is_open()){
        write_file.write(
            reinterpret_cast<const char *>(data.data()),
            static_cast<std::streamsize>(data.size())
        );
        if(!write_file){
            return false;
        }
        write_file.close();
        if(!write_file){
            return false;
        }
    }
    else {
        return false;
    }

    return true;
}
