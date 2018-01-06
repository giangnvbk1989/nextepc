/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/fix-a90.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted`
 */

#ifndef	_S1ap_MDT_Activation_H_
#define	_S1ap_MDT_Activation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_MDT_Activation {
	S1ap_MDT_Activation_immediate_MDT_only	= 0,
	S1ap_MDT_Activation_immediate_MDT_and_Trace	= 1,
	S1ap_MDT_Activation_logged_MDT_only	= 2
	/*
	 * Enumeration is extensible
	 */
} e_S1ap_MDT_Activation;

/* S1ap-MDT-Activation */
typedef long	 S1ap_MDT_Activation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_MDT_Activation;
asn_struct_free_f S1ap_MDT_Activation_free;
asn_struct_print_f S1ap_MDT_Activation_print;
asn_constr_check_f S1ap_MDT_Activation_constraint;
ber_type_decoder_f S1ap_MDT_Activation_decode_ber;
der_type_encoder_f S1ap_MDT_Activation_encode_der;
xer_type_decoder_f S1ap_MDT_Activation_decode_xer;
xer_type_encoder_f S1ap_MDT_Activation_encode_xer;
per_type_decoder_f S1ap_MDT_Activation_decode_uper;
per_type_encoder_f S1ap_MDT_Activation_encode_uper;
per_type_decoder_f S1ap_MDT_Activation_decode_aper;
per_type_encoder_f S1ap_MDT_Activation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_MDT_Activation_H_ */
#include "asn_internal.h"
