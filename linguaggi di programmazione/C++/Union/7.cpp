// Creare una `union` per rappresentare un indirizzo IP che può essere IPv4 o IPv6. Implementare l'assegnazione e la stampa di entrambi i tipi di indirizzo.

#include <iostream>
#include <iomanip>

union IPAddress {
    uint32_t ipv4;
    uint8_t ipv6[16];
};

int main() {
    IPAddress ip;

    ip.ipv4 = 0xC0A80001; // 192.168.0.1 in esadecimale
    std::cout << "IPv4: " << std::hex << std::setw(8) << std::setfill('0') << ip.ipv4 << std::endl;

    uint8_t ipv6Addr[16] = {0x20, 0x01, 0x0d, 0xb8, 0x85, 0xa3, 0x00, 0x00, 0x8a, 0x2e, 0x03, 0x70, 0x73, 0x34, 0x00, 0x00};
    std::copy(std::begin(ipv6Addr), std::end(ipv6Addr), std::begin(ip.ipv6));
    std::cout << "IPv6: ";
    for (const auto& byte : ip.ipv6) {
        std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(byte) << " ";
    }
    std::cout << std::endl;

    return 0;
}