#include <event_manager.h>

struct button_event {
        struct event_header header;

        /* Custom data fields. */
        int8_t value1;
        int16_t value2;
        int32_t value3;
};

EVENT_TYPE_DECLARE(button_event);
