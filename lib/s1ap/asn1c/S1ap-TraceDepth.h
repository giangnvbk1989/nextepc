/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/fix-a90.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted`
 */

#ifndef	_S1ap_TraceDepth_H_
#define	_S1ap_TraceDepth_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_TraceDepth {
	S1ap_TraceDepth_minimum	= 0,
	S1ap_TraceDepth_medium	= 1,
	S1ap_TraceDepth_maximum	= 2,
	S1ap_TraceDepth_minimumWithoutVendorSpecificExtension	= 3,
	S1ap_TraceDepth_mediumWithoutVendorSpecificExtension	= 4,
	S1ap_TraceDepth_maximumWithoutVendorSpecificExtension	= 5
	/*
	 * Enumeration is extensible
	 */
} e_S1ap_TraceDepth;

/* S1ap-TraceDepth */
typedef long	 S1ap_TraceDepth_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_TraceDepth;
asn_struct_free_f S1ap_TraceDepth_free;
asn_struct_print_f S1ap_TraceDepth_print;
asn_constr_check_f S1ap_TraceDepth_constraint;
ber_type_decoder_f S1ap_TraceDepth_decode_ber;
der_type_encoder_f S1ap_TraceDepth_encode_der;
xer_type_decoder_f S1ap_TraceDepth_decode_xer;
xer_type_encoder_f S1ap_TraceDepth_encode_xer;
per_type_decoder_f S1ap_TraceDepth_decode_uper;
per_type_encoder_f S1ap_TraceDepth_encode_uper;
per_type_decoder_f S1ap_TraceDepth_decode_aper;
per_type_encoder_f S1ap_TraceDepth_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_TraceDepth_H_ */
#include "asn_internal.h"
