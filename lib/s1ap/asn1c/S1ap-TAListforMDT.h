/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/fix-a90.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted`
 */

#ifndef	_S1ap_TAListforMDT_H_
#define	_S1ap_TAListforMDT_H_


#include "asn_application.h"

/* Including external dependencies */
#include "S1ap-TAC.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* S1ap-TAListforMDT */
typedef struct S1ap_TAListforMDT {
	A_SEQUENCE_OF(S1ap_TAC_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_TAListforMDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_TAListforMDT;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_TAListforMDT_H_ */
#include "asn_internal.h"
