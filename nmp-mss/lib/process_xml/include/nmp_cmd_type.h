/**
 * @file     nmp_cmd_type.h  
 * @author   Yang Ying
 * @section  LICENSE
 *
 * Copyright by Shenzhen JXJ Electronic Co.Ltd, 2011.
 * Website: www.szjxj.com
 *
 * @section  DESCRIPTION
 *
 * To define command type used in platform project. It defined 
 * message type here, and also provide the corresponding 
 * processing function for a specific command, include creating-
 * function and parsing-function.
 *
 * history 
 * 2012.04.14 - Yang Ying, initiate to create;
 */
 
#ifndef __NMP_CMD_TYPE__
#define __NMP_CMD_TYPE__

//#include "nmp_xml_fun.h"

#define MAX_CMD_ID_LEN	                64
#define INT_TO_CHAR_LEN                32



#define ROOTNODE         "message"
#define ATTRIBUTE_TYPE   "type"


//void nmp_init_cmd_id();     


#define xml_malloc(size)  malloc(size)

#define  xml_debug(fmt, arg...) \
                        do{\
							printf("FILE %s FUNC %s (%d)=>|"fmt,\
							__FILE__, __FUNCTION__, __LINE__ , ##arg);\
                        }while(0)
#define  xml_error(fmt, arg...) \
                        do{\
							printf("FILE %s FUNC %s (%d)=>|"fmt,\
							__FILE__, __FUNCTION__, __LINE__ , ##arg);\
                        }while(0)
#define  xml_warning(fmt, arg...) \
                        do{\
							printf("FILE %s FUNC %s (%d)=>|"fmt,\
							__FILE__, __FUNCTION__, __LINE__ , ##arg);\
                        }while(0)
#define ASSERT assert


#endif
