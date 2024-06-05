#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char variant[50];
    int quantity;
    float price;
} Fish;

typedef struct {
    char name[50];
    int quantity;
    float price;
} Product;

void startBusiness() {
    printf("Memulai Bisnis Ikan Cupang...\n");
}

void defineBusinessModel() {
    printf("Mendefinisikan Model Bisnis...\n");
}

void addFish(Fish *fish, char *name, char *variant, int quantity, float price) {
    strcpy(fish->name, name);
    strcpy(fish->variant, variant);
    fish->quantity = quantity;
    fish->price = price;
    printf("Menambahkan Ikan: %s, Variasi: %s, Jumlah: %d, Harga: %.2f\n", fish->name, fish->variant, fish->quantity, fish->price);
}

void addProduct(Product *product, char *name, int quantity, float price) {
    strcpy(product->name, name);
    product->quantity = quantity;
    product->price = price;
    printf("Menambahkan Produk: %s, Jumlah: %d, Harga: %.2f\n", product->name, product->quantity, product->price);
}

void defineOrganizationStructure() {
    printf("Mendefinisikan Struktur Organisasi...\n");
    printf("  - Produksi\n");
    printf("  - Pemasaran\n");
    printf("  - Penjualan\n");
    printf("  - Layanan Pelanggan\n");
}

void defineBusinessProcesses() {
    printf("Menetapkan Proses Bisnis...\n");
    printf("  - Breeding\n");
    printf("  - Pembesaran\n");
    printf("  - Karantina dan Kesehatan\n");
    printf("  - Pemasaran dan Penjualan\n");
    printf("  - Pengiriman\n");
}

void defineGoalsAndStrategies() {
    printf("Menetapkan Tujuan dan Strategi...\n");
    printf("  - Visi: Menjadi penyedia ikan cupang berkualitas tinggi\n");
    printf("  - Misi: Menyediakan ikan cupang yang sehat dan indah\n");
    printf("  - Tujuan Jangka Pendek: Meningkatkan produksi dan penjualan\n");
    printf("  - Tujuan Jangka Panjang: Ekspansi ke pasar internasional\n");
    printf("  - Strategi: Menggunakan media sosial untuk promosi\n");
}

void analyzeMarketAndCompetition() {
    printf("Melakukan Analisis Pasar...\n");
    printf("  - Target Pasar: Pecinta ikan hias, penghobi akuarium, kolektor ikan cupang\n");
    printf("  - Tren Pasar: Meningkatnya minat terhadap ikan hias\n");
    printf("  - Kompetisi: Kompetitor lokal dan internasional\n");
}

void planFinanceAndOperations() {
    printf("Melakukan Perencanaan Keuangan...\n");
    printf("  - Investasi Awal: Biaya fasilitas breeding, peralatan, stok\n");
    printf("  - Pendapatan: Penjualan ikan, pakan, aksesoris\n");
    printf("  - Pengeluaran: Biaya operasional\n");
    printf("  - Metrik Utama: Jumlah ikan terjual, pendapatan, kepuasan pelanggan\n");
}

void checkRegulationsAndCompliance() {
    printf("Memeriksa Kepatuhan Regulasi...\n");
    printf("  - Peraturan Pemerintah: Izin perdagangan, standar kesejahteraan hewan\n");
    printf("  - Standar Kualitas: Kesehatan ikan, kondisi pengiriman\n");
    printf("  - Kepatuhan Lingkungan: Mengelola limbah, menjaga kebersihan\n");
}

int main() {
    startBusiness();
    defineBusinessModel();

    Fish bettaFish;
    addFish(&bettaFish, "Betta Fish", "Halfmoon", 100, 50.0);

    Product fishFood;
    addProduct(&fishFood, "Fish Food", 200, 20.0);

    defineOrganizationStructure();
    defineBusinessProcesses();
    defineGoalsAndStrategies();
    analyzeMarketAndCompetition();
    planFinanceAndOperations();
    checkRegulationsAndCompliance();

    printf("Bisnis Ikan Cupang Berjalan dengan Baik!\n");

    return 0;
}
