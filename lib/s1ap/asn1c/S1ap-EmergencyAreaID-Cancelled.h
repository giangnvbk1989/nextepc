/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/fix-a90.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted`
 */

#ifndef	_S1ap_EmergencyAreaID_Cancelled_H_
#define	_S1ap_EmergencyAreaID_Cancelled_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_EmergencyAreaID_Cancelled_Item;

/* S1ap-EmergencyAreaID-Cancelled */
typedef struct S1ap_EmergencyAreaID_Cancelled {
	A_SEQUENCE_OF(struct S1ap_EmergencyAreaID_Cancelled_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_EmergencyAreaID_Cancelled_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_EmergencyAreaID_Cancelled;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "S1ap-EmergencyAreaID-Cancelled-Item.h"

#endif	/* _S1ap_EmergencyAreaID_Cancelled_H_ */
#include "asn_internal.h"
