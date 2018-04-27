#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>
#include <string.h>
 
//va_start(arg,format),初始化参数指针arg，将函数参数format右边第一个参数地址赋值给arg
//format必须是一个参数的指针，所以，此种类型函数至少要有一个普通的参数,
//从而提供给va_start ,这样va_start才能找到可变参数在栈上的位置。
//va_arg(arg,char),获得arg指向参数的值，同时使arg指向下一个参数,char用来指名当前参数型
//va_end 在有些实现中可能会把arg改成无效值，这里，是把arg指针指向了 NULL,避免出现野指针
 
void print(const char *format, ...) {
    va_list arg;
    va_start(arg, format);
    while (*format) {
        char ret = *format;
        if (ret == '%') { // 判断是否是占位符
            switch (*++format) {
                case 'c': {
                    char ch = va_arg(arg, char);
                    putchar(ch);
                    break;
                }
                case 's': {
                    char *pc = va_arg(arg, char *);
                    while (*pc) {
                        putchar(*pc);
                        pc++;
                    }
                    break;
                }
                case 'd': {
                    int num = va_arg(arg, int);
                    int rnum = 0;
                    while (num != 0) {
                        rnum = rnum * 10 + num % 10;
                        num /= 10;
                    }
                    while (rnum != 0) {
                        putchar(48 + rnum % 10);
                        rnum /= 10;
                    }
                    break;
                }
                default:
                    break;
            }
        }
        else {
            // 不是占位符，就直接输出相关内容
            putchar(*format);
        }
        format++;
    }
    va_end(arg);
}

int main() {
    int n = 6666;
    print("%s %s %s\n", "wo", "shi", "lizhicun");
    print("%d shi ni a!\n", n);
    return 0;
}


