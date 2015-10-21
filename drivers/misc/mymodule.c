#include <linux/module.h>
/* not need this anymore since 2.6.X
#include <linux/config.h>
*/
#include <linux/init.h>
//#include <unistd.h>

extern int my_variable;
extern int nr_PGfanis1;
extern int nr_PGfanis0;

static int __init mymodule_init(void)
{   
    //while (true) {
    	//printk ("my_variable is %d\n", my_variable);
    	printk ("My module worked!\n");
	printk ("nr_PGfanis1 = %d\n", nr_PGfanis1);
	printk ("nr_PGfanis0 = %d\n\n", nr_PGfanis0);
	//sleep(10);
    //}
    return 0;
}

static void __exit mymodule_exit(void)
{
    printk ("Unloading my module.\n");
    return;
}

module_init(mymodule_init);
module_exit(mymodule_exit);

MODULE_LICENSE("GPL");
