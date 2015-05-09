#ifndef PROTOCOL_H
#define PROTOCOL_H

#define VENDOR_ID                 0x16c0
#define VENDOR_NAME               "github.com/samanos"
#define VENDOR_NAME_ARRAY         'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 's', 'a', 'm', 'a', 'n', 'o', 's'
#define VENDOR_NAME_ARRAY_LEN     18

#define PRODUCT_ID                0x05dc
#define PRODUCT_NAME              "tiny-bridge"
#define PRODUCT_NAME_ARRAY        't', 'i', 'n', 'y', '-', 'b', 'r', 'i', 'd', 'g', 'e'
#define PRODUCT_NAME_ARRAY_LEN    11

#define REQUEST_BRIDGE_STATUS     1
#define REQUEST_BRIDGE_NRF_STATUS 2
#define REQUEST_TRANSFER1         3

#endif
