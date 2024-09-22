#pragma once

#include "slint_string.h"
#include <Controller/Core/BasicView.h>
#include <Controller/Core/GlobalAgent.hh>
#include <Controller/Core/UiBase.h>
#include <Infrastructure/Network/ResponseStruct.h>

EVENTO_UI_START

class MyEventPage : public BasicView, private GlobalAgent<MyEventPageBridge> {
public:
    MyEventPage(slint::ComponentHandle<UiEntryName> uiEntry, UiBridge& bridge);

private:
    void onCreate() override;
    void onShow() override;
<<<<<<< HEAD

    bool check_code(slint::SharedString code, int id);
    //get info
    void get_events(slint::SharedString part);
=======
>>>>>>> ce4a2495d1ca609be509b7dccab8eb2ffae07bd5
};

EVENTO_UI_END