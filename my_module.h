#ifndef GODOT_MY_MODULE_H
#define GODOT_MY_MODULE_H

#include "core/object/ref_counted.h"

class MyModule : public RefCounted {
    GDCLASS(MyModule, RefCounted);

protected:
    static void _bind_methods();

public:
    MyModule();
};

#endif