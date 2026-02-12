// Separate specification from implementations 
// Account.h file

// Use many compiler use pragma
// #pragma once

// Or use, Include Guards to prevent compiler to include declaration multiple of times
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account {
  private:
  double balance {0.0};
  public:
  void set_balance(double bal);
  double get_balance();
};

#endif // _ACCOUNT_H_