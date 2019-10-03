#include <linux/kernel.h>

asmlinkage long sys_maycall(void){
        printk("System Call Example!\n");
        
        return 0;
}  
