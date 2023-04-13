/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-NI-IEs"
 * 	found in "/local/mnt/openairinterface5g/openair2/RIC_AGENT/MESSAGES/ASN1/R01/e2sm-ni-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/mnt/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/E2SM-NI/`
 */

#include "E2SM_NI_E2SM-NI-CallProcessID.h"

static asn_per_constraints_t asn_PER_type_E2SM_NI_E2SM_NI_CallProcessID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_E2SM_NI_E2SM_NI_CallProcessID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_NI_E2SM_NI_CallProcessID, choice.callProcessID_Format1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_NI_E2SM_NI_CallProcessID_Format1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"callProcessID-Format1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_NI_E2SM_NI_CallProcessID, choice.callProcessID_Format2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_NI_E2SM_NI_CallProcessID_Format2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"callProcessID-Format2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_NI_E2SM_NI_CallProcessID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* callProcessID-Format1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* callProcessID-Format2 */
};
static asn_CHOICE_specifics_t asn_SPC_E2SM_NI_E2SM_NI_CallProcessID_specs_1 = {
	sizeof(struct E2SM_NI_E2SM_NI_CallProcessID),
	offsetof(struct E2SM_NI_E2SM_NI_CallProcessID, _asn_ctx),
	offsetof(struct E2SM_NI_E2SM_NI_CallProcessID, present),
	sizeof(((struct E2SM_NI_E2SM_NI_CallProcessID *)0)->present),
	asn_MAP_E2SM_NI_E2SM_NI_CallProcessID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_NI_E2SM_NI_CallProcessID = {
	"E2SM-NI-CallProcessID",
	"E2SM-NI-CallProcessID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_E2SM_NI_E2SM_NI_CallProcessID_constr_1, CHOICE_constraint },
	asn_MBR_E2SM_NI_E2SM_NI_CallProcessID_1,
	2,	/* Elements count */
	&asn_SPC_E2SM_NI_E2SM_NI_CallProcessID_specs_1	/* Additional specs */
};

