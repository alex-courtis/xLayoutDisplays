#ifndef XLAYOUTDISPLAYS_LAYOUT_H
#define XLAYOUTDISPLAYS_LAYOUT_H

#include "Displ.h"
#include "Monitors.h"
#include "Settings.h"

// TODO should not be a class; a single apply method is fine
// encapsulates everything necessary to layout displays
class Layout {
public:

    // loads command line settings, overriding with ~/.xLayoutDisplays
    // discovers current state of displays and monitors
    Layout(int argc, char **argv);

    // arranges displays (if not in info mode) and applies this arrangement (if not in dry-run mode)
    // prints out information during the process, if we're in info or verbose mode
    // returns 0 or failure code from system
    const int apply();

private:
    const Monitors monitors;

    const Settings settings;
};

#endif //XLAYOUTDISPLAYS_LAYOUT_H
