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

float eRegPre(float vehiclePrice, float vehicleTax) {
  if (vehiclePrice < 0 || vehicleTax < 0) {
    return 0.0;
  }
  return vehiclePrice * vehicleTax / 100.0;
}

float eInt(float vehiclePrice, float vehicleTax, float vehicleInterest) {
  if (vehiclePrice < 0 || vehicleTax < 0 || vehicleInterest < 0) {
    return 0.0;
  }
  return ((vehiclePrice - eRegPre(vehiclePrice, vehicleTax)) * vehicleInterest /
          100.0) /
         12.0;
}

void test_eRegPre() {
  assert(eRegPre(2.0, 50.0) == 1.0);
  assert(eRegPre(3.0, 100.0) == 3.0);
  assert(eRegPre(123.123, -3.0) == 0.0);
  assert(eRegPre(-3.0, 123.123) == 0.0);
  assert(eRegPre(-3.0, -3.0) == 0.0);
}

void test_eInt() {
  assert(eInt(1.0, 2.0, -1.0) == 0.0);
  assert(eInt(1.0, -2.0, 1.0) == 0.0);
  assert(eInt(-1.0, 2.0, 1.0) == 0.0);
  assert(eInt(2.0, 50.0, 1200.0) == 1.0);
}

int main() {
  test_eRegPre();
  test_eInt();
  PURCHASE firstPurchase;
  firstPurchase.ID = 1;
  firstPurchase.OriginalValue = 2.0;
  firstPurchase.EReg = 3.0;
  firstPurchase.EPre = 2.0;
  firstPurchase.Total = 123.01;
  std::cout << firstPurchase.ID << std::endl;
  return 0;
}