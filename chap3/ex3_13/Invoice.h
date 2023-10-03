// Invoice.h

#include <string>

class Invoice
{
public:
    Invoice(std::string thePartNumber,
            std::string thePartDescription,
            int theQtyPurchased,
            int thePricePerItem);

    std::string getPartNumber() const;
    void setPartNumber(std::string number);

    std::string getPartDescription() const;
    void setPartDescription(std::string description);

    int getQtyPurchased() const;
    void setQtyPurchased(int qty);

    int getPricePerItem() const;
    void setPricePerItem(int price);

    int getInvoiceAmount() const;

private:
    std::string partNumber;
    std::string partDescription;
    int qtyPurchased;
    int pricePerItem;
};
