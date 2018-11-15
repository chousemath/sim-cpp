#include <iostream>

// const vehiclePurchasePrice = (price: number): Purchase => {
// const _eReg: number = eReg(price);
// const _ePre: number = ePre(price);
// return { original: price, e_reg: Math.round(_eReg), e_pre: Math.round(_ePre),
// total: Math.round(-(_eReg + _ePre)) };
// };

struct PURCHASE {
  uint ID;
  float OriginalValue;
  float EReg;
  float EPre;
  float Total;
} purchase;

float eReg(float vehiclePrice, float vehicleTax) {
  if (vehicleTax < 0) {
    return 0.0;
  }
  return vehiclePrice * vehicleTax / 100.0;
}

void test_eReg() {
  assert(eReg(2.0, 50.0) == 1.0);
  assert(eReg(3.0, 100.0) == 3.0);
  assert(eReg(123.123, -3.0) == 0.0);
}

int main() {
  test_eReg();
  PURCHASE firstPurchase;
  firstPurchase.ID = 1;
  firstPurchase.OriginalValue = 2.0;
  firstPurchase.EReg = 3.0;
  firstPurchase.EPre = 2.0;
  firstPurchase.Total = 123.01;
  std::cout << firstPurchase.ID << std::endl;
  return 0;
}