/**
 * =====================================================================================
 *
 *   @file zeromq.h
 *   @author Victor Perron (), victor.perron@locarise.com
 *   
 *        Version:  1.0
 *        Created:  12/12/2012 06:28:05 PM
 *        Company:  Locarise
 *
 *   @section DESCRIPTION
 *
 *       Definitions for zmq-related functions
 *       
 *   @section LICENSE
 *
 *      LGPL http://www.gnu.org/licenses/lgpl.html 
 *
 * =====================================================================================
 */

#include <czmq.h>

#ifndef _GRIDEYE_DRIVER_ZEROMQ_H_
#define _GRIDEYE_DRIVER_ZEROMQ_H_

#ifdef __cplusplus
extern "C" {
#endif

void zeromq_send_data(void* socket, char *hwaddr, uint8_t* data, int size);
void *zeromq_create_socket (zctx_t *context, char* endpoint, int type, 
		char* topic, bool connect, int linger, int hwm);

#ifdef __cplusplus
}
#endif

#endif
