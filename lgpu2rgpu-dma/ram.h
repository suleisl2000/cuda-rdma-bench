#ifndef __RAM_H__
#define __RAM_H__
#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <stdint.h>


/* Do memset on a RAM memory buffer
 *
 * buf                  - pointer to the buffer
 * len                  - size of the buffer
 * val                  - the value to set
 *
 * No return value
 */
void ram_memset(void* buf, size_t len, uint8_t val);


/* Do memcmp on a two RAM memory buffers
 *
 * src_ptr              - pointer to the first buffer
 * dst_ptr              - pointer to the second buffer
 * len                  - size of the buffers
 *
 * Returns the byte position where the first difference is encountered
 */
size_t ram_memcmp(void* src_ptr, volatile void* dst_ptr, size_t len);


/* Copy memory from remote buffer to local RAM memory buffer
 *
 * local_ptr            - pointer to local buffer
 * remote_ptr           - pointer to remote buffer
 * len                  - number of bytes to copy
 */
void ram_memcpy_remote_to_local(void* local_ptr, volatile void* remote_ptr, size_t len);


/* Copy memory from a local RAM memory buffer to a remote buffer
 *
 * local_ptr            - pointer to local buffer
 * remote_ptr           - pointer to remote buffer
 * len                  - number of bytes to copy
 */
void ram_memcpy_local_to_remote(void* local_ptr, volatile void* remote_ptr, size_t len);


#ifdef __cplusplus
}
#endif
#endif