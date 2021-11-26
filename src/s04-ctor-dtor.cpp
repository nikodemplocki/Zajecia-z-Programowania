#include <iostream>

struct strk
{
    private:
    std::string rp1;
    std::string rp2;

    public:
    strk(std::string p1, std::string p2){
        rp1 = p1;
        rp2 = p2;
    }
    ~strk(){
        std::cout << rp1 << "\n";
        std::cout << rp2 << "\n";
        std::cout << "DESTRUCTION!";
    }
};


auto main()-> int
{
    std::string x;
    auto nstrk = strk("1", "2");
    std::cin >> x;
    return 0;
}
