#pragma once
#include <filesystem>
#include <optional>
#include <vector>
#include <fstream>
#include <iostream>

namespace deadvault{
    class VaultStorage{
        public:
        bool file_exists(const std::filesystem::path& path) const;
        std::optional<uintmax_t> get_file_size(
            const std::filesystem::path& path
        ) const;
        std::optional<std::vector<unsigned char>> read_file(
            const std::filesystem::path& path
        ) const;
        bool write_file(
            const std::filesystem::path& path,
            const std::vector<unsigned char>& data
        ) const;

    };
}