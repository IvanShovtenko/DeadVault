#include "includes.hpp"




int main(){
    deadvault::VaultStorage vault;
    std::filesystem::path path("tests/secret.bin");
    std::filesystem::path path1("tests/unknown.bin");
    // auto size = vault.get_file_size(path1);
    // auto size1 = vault.get_file_size(path);
    // std::cout<<std::boolalpha;
    // std::cout<<vault.file_exists(path1)<<"\n";
    // if(size.has_value()){
    //     std::cout<<*size<<"\n";
    // }
    // else{
    //     std::cout<<"File not found"<<"\n";
    // }
    // if(size1.has_value()){
    //     std::cout<<*size1<<"\n";
    // }
    // else{
    //     std::cout<<"File not found"<<"\n";
    // }
    // auto result = vault.read_file(path);
    // if (result.has_value()) {
    //     for (unsigned char byte : *result) {
    //         std::cout << static_cast<int>(byte) << '\n';
    //     }
    // }
    // else {
    //     std::cout << "Failed to read file\n";
    // }
   std::filesystem::path path2("storage/test.bin");

    // Данные, которые хотим записать
    std::vector<unsigned char> original = {
        10, 20, 30, 40, 50, 100, 200, 255
    };

    // Записываем файл
    if (vault.write_file(path2, original)) {
        std::cout << "Write successful\n";
    }
    else {
        std::cout << "Write failed\n";
        return 1;
    }

    // Читаем записанный файл
    auto result = vault.read_file(path2);

    if (result.has_value()) {
        std::cout << "Read successful\n";

        // Сравниваем два вектора
        if (original == *result) {
            std::cout << "Data matches!\n";
        }
        else {
            std::cout << "Data mismatch!\n";
        }
    }
    else {
        std::cout << "Read failed\n";
    }

    return 0;


//     std::vector<unsigned char> encrypted = {10, 20, 30, 40, 255, 100, 150};
//     std::filesystem::path file = "tests/Vault/secret.bin";
//     std::ofstream file1(file,std::ios::binary);
//     if(file1.is_open()){
//     file1.write(
//         reinterpret_cast<const char *>(encrypted.data()),
//         static_cast<std::streamsize>(encrypted.size())
        
//     );
//     file1.close();
// }
//     std::ifstream file2(file,std::ios::binary);
//     auto size = std::filesystem::file_size(file);
//     std::vector<unsigned char> data(size);
//     if(file2.is_open()){
//         file2.read(
//         reinterpret_cast<char*>(data.data()),
//         static_cast<std::streamsize>(data.size())
//         );
//         file2.close();
//     }
//     for (auto i : data) {
//     std::cout << static_cast<int>(i) << " ";
// }

}
