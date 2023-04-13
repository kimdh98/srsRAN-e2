/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-NI-IEs"
 * 	found in "/local/mnt/openairinterface5g/openair2/RIC_AGENT/MESSAGES/ASN1/R01/e2sm-ni-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/mnt/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/E2SM-NI/`
 */

#ifndef	_E2SM_NI_RANueGroup_Item_H_
#define	_E2SM_NI_RANueGroup_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2SM_NI_RANueGroupID.h"
#include "E2SM_NI_RANueGroupDefinition.h"
#include "E2SM_NI_RANimperativePolicy.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM_NI_RANueGroup-Item */
typedef struct E2SM_NI_RANueGroup_Item {
	E2SM_NI_RANueGroupID_t	 ranUEgroupID;
	E2SM_NI_RANueGroupDefinition_t	 ranUEgroupDefinition;
	E2SM_NI_RANimperativePolicy_t	 ranPolicy;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_NI_RANueGroup_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_NI_RANueGroup_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_NI_RANueGroup_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_NI_RANueGroup_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_NI_RANueGroup_Item_H_ */
#include "asn_internal.h"
