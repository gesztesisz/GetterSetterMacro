#define GETSET(type_of,val) \
  type_of get_##val (void) const { return val; } \
  void set_##val (const type_of val) { this->val = val; }
