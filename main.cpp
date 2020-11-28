#include "Encryption.hpp"
#include <chrono>
#include <thread>

int main()
{
	auto a = std::chrono::steady_clock::now();
	Encryption::encryptFile("original.dll", "encrypted.dll");
	auto b = std::chrono::steady_clock::now();
	Encryption::decryptFile("encrypted.dll", "decrypted.dll");
	auto c = std::chrono::steady_clock::now();

	std::cout << "That took " << std::chrono::duration_cast<std::chrono::milliseconds>(b - a).count() << "ms to encrypt" << std::endl;
	std::cout << "and took " << std::chrono::duration_cast<std::chrono::milliseconds>(c - b).count() << "ms to decrypt" << std::endl;

	while (1);
	return 0;
}