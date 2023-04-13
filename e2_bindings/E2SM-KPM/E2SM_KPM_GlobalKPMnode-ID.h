/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/local/setup/srslte-ric/srsenb/src/ric/messages/asn1/e2sm-kpm-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/setup/srslte-ric/build/srsenb/src/ric/messages/E2SM-KPM/`
 */

#ifndef	_E2SM_KPM_GlobalKPMnode_ID_H_
#define	_E2SM_KPM_GlobalKPMnode_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2SM_KPM_GlobalKPMnode-gNB-ID.h"
#include "E2SM_KPM_GlobalKPMnode-en-gNB-ID.h"
#include "E2SM_KPM_GlobalKPMnode-ng-eNB-ID.h"
#include "E2SM_KPM_GlobalKPMnode-eNB-ID.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2SM_KPM_GlobalKPMnode_ID_PR {
	E2SM_KPM_GlobalKPMnode_ID_PR_NOTHING,	/* No components present */
	E2SM_KPM_GlobalKPMnode_ID_PR_gNB,
	E2SM_KPM_GlobalKPMnode_ID_PR_en_gNB,
	E2SM_KPM_GlobalKPMnode_ID_PR_ng_eNB,
	E2SM_KPM_GlobalKPMnode_ID_PR_eNB
	/* Extensions may appear below */
	
} E2SM_KPM_GlobalKPMnode_ID_PR;

/* E2SM_KPM_GlobalKPMnode-ID */
typedef struct E2SM_KPM_GlobalKPMnode_ID {
	E2SM_KPM_GlobalKPMnode_ID_PR present;
	union E2SM_KPM_GlobalKPMnode_ID_u {
		E2SM_KPM_GlobalKPMnode_gNB_ID_t	 gNB;
		E2SM_KPM_GlobalKPMnode_en_gNB_ID_t	 en_gNB;
		E2SM_KPM_GlobalKPMnode_ng_eNB_ID_t	 ng_eNB;
		E2SM_KPM_GlobalKPMnode_eNB_ID_t	 eNB;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_KPM_GlobalKPMnode_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_GlobalKPMnode_ID;
extern asn_CHOICE_specifics_t asn_SPC_E2SM_KPM_GlobalKPMnode_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_KPM_GlobalKPMnode_ID_1[4];
extern asn_per_constraints_t asn_PER_type_E2SM_KPM_GlobalKPMnode_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_GlobalKPMnode_ID_H_ */
#include "asn_internal.h"
