/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/local/setup/srslte-ric/srsenb/src/ric/messages/asn1/e2sm-kpm-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/setup/srslte-ric/build/srsenb/src/ric/messages/E2SM-KPM/`
 */

#include "E2SM_KPM_CellResourceReportListItem.h"

#include "E2SM_KPM_ServedPlmnPerCellListItem.h"
static int
memb_E2SM_KPM_dl_TotalofAvailablePRBs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 273)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_E2SM_KPM_ul_TotalofAvailablePRBs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 273)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_E2SM_KPM_servedPlmnPerCellList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 12)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_E2SM_KPM_servedPlmnPerCellList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_E2SM_KPM_dl_TotalofAvailablePRBs_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  273 }	/* (0..273) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_E2SM_KPM_ul_TotalofAvailablePRBs_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  273 }	/* (0..273) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_E2SM_KPM_servedPlmnPerCellList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_E2SM_KPM_servedPlmnPerCellList_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2SM_KPM_ServedPlmnPerCellListItem,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_servedPlmnPerCellList_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_E2SM_KPM_servedPlmnPerCellList_specs_5 = {
	sizeof(struct E2SM_KPM_CellResourceReportListItem__servedPlmnPerCellList),
	offsetof(struct E2SM_KPM_CellResourceReportListItem__servedPlmnPerCellList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_servedPlmnPerCellList_5 = {
	"servedPlmnPerCellList",
	"servedPlmnPerCellList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_E2SM_KPM_servedPlmnPerCellList_tags_5,
	sizeof(asn_DEF_E2SM_KPM_servedPlmnPerCellList_tags_5)
		/sizeof(asn_DEF_E2SM_KPM_servedPlmnPerCellList_tags_5[0]) - 1, /* 1 */
	asn_DEF_E2SM_KPM_servedPlmnPerCellList_tags_5,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_servedPlmnPerCellList_tags_5)
		/sizeof(asn_DEF_E2SM_KPM_servedPlmnPerCellList_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_E2SM_KPM_servedPlmnPerCellList_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_E2SM_KPM_servedPlmnPerCellList_5,
	1,	/* Single element */
	&asn_SPC_E2SM_KPM_servedPlmnPerCellList_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_E2SM_KPM_CellResourceReportListItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_CellResourceReportListItem, nRCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_KPM_NRCGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nRCGI"
		},
	{ ATF_POINTER, 2, offsetof(struct E2SM_KPM_CellResourceReportListItem, dl_TotalofAvailablePRBs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_E2SM_KPM_dl_TotalofAvailablePRBs_constr_3,  memb_E2SM_KPM_dl_TotalofAvailablePRBs_constraint_1 },
		0, 0, /* No default value */
		"dl-TotalofAvailablePRBs"
		},
	{ ATF_POINTER, 1, offsetof(struct E2SM_KPM_CellResourceReportListItem, ul_TotalofAvailablePRBs),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_E2SM_KPM_ul_TotalofAvailablePRBs_constr_4,  memb_E2SM_KPM_ul_TotalofAvailablePRBs_constraint_1 },
		0, 0, /* No default value */
		"ul-TotalofAvailablePRBs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_CellResourceReportListItem, servedPlmnPerCellList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_E2SM_KPM_servedPlmnPerCellList_5,
		0,
		{ 0, &asn_PER_memb_E2SM_KPM_servedPlmnPerCellList_constr_5,  memb_E2SM_KPM_servedPlmnPerCellList_constraint_1 },
		0, 0, /* No default value */
		"servedPlmnPerCellList"
		},
};
static const int asn_MAP_E2SM_KPM_CellResourceReportListItem_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_CellResourceReportListItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_KPM_CellResourceReportListItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nRCGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-TotalofAvailablePRBs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-TotalofAvailablePRBs */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* servedPlmnPerCellList */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_CellResourceReportListItem_specs_1 = {
	sizeof(struct E2SM_KPM_CellResourceReportListItem),
	offsetof(struct E2SM_KPM_CellResourceReportListItem, _asn_ctx),
	asn_MAP_E2SM_KPM_CellResourceReportListItem_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_E2SM_KPM_CellResourceReportListItem_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_CellResourceReportListItem = {
	"CellResourceReportListItem",
	"CellResourceReportListItem",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_KPM_CellResourceReportListItem_tags_1,
	sizeof(asn_DEF_E2SM_KPM_CellResourceReportListItem_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_CellResourceReportListItem_tags_1[0]), /* 1 */
	asn_DEF_E2SM_KPM_CellResourceReportListItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_CellResourceReportListItem_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_CellResourceReportListItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_KPM_CellResourceReportListItem_1,
	4,	/* Elements count */
	&asn_SPC_E2SM_KPM_CellResourceReportListItem_specs_1	/* Additional specs */
};

