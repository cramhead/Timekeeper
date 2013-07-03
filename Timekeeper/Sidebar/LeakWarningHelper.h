#ifndef iTunes_Read_Test_LeakWarningHelper_h
#define iTunes_Read_Test_LeakWarningHelper_h

// This awesome method was found at Stackoverflow
// From Rob Mayoff - http://stackoverflow.com/users/77567/rob-mayoff
// Initial Solution by Scott Thompson - http://stackoverflow.com/users/415303/scott-thompson
// http://stackoverflow.com/a/7933931/1320374

#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)

#endif
