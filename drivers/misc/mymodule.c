#include <linux/module.h>
/* not need this anymore since 2.6.X
#include <linux/config.h>
*/
#include <linux/init.h>

static int __init mymodule_init(void)
{
 printk ("My module worked!\n");
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
