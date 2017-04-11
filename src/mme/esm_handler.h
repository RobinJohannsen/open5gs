#ifndef __ESM_HANDLER_H__
#define __ESM_HANDLER_H__

#include "nas_message.h"

#include "mme_context.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

CORE_DECLARE(void) esm_handle_pdn_connectivity_request(mme_esm_t *esm, 
        nas_pdn_connectivity_request_t *pdn_connectivity_request);
CORE_DECLARE(void) esm_handle_information_response(mme_esm_t *esm, 
        nas_esm_information_response_t *esm_information_response);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __ESM_HANDLER_H__ */
