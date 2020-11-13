#include <string>

class Invoice
{
    public:
    explicit Invoice(std::string, std::string, int, int);
    void setPartNumber(std::string);
    void setPartDescription(std::string);
    void setQuantity(int);
    void setPricePerItem(int);
    std::string getPartNumber() const;
    std::string getPartDescription() const;
    int getQuantity() const;
    int getPricePerItem() const;
    int getInvoiceAmount() const;
    private:
    std::string partNumber;
    std::string partDescription;
    int quantityOfItem;
    int pricePerItem;
};