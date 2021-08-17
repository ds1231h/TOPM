//
// Created by SENSETIME\mupei on 2021/8/10.
//

#ifndef TOPM_ISL_DUMP_H
#define TOPM_ISL_DUMP_H

#include "isl/aff.h"
#include "isl/id.h"
#include "isl/options.h"
#include "isl/schedule.h"
#include "isl/set.h"
#include "isl/space.h"
#include "isl/space_type.h"
#include "isl/union_set.h"
#include "isl/ast.h"

void isl_dump(isl_set* set);
void isl_dump(isl_aff* aff);
void isl_dump(isl_id* id);
void isl_dump(isl_schedule* schedule);
void isl_dump(isl_space* space);
void isl_dump(isl_union_map* union_map);
void isl_dump(isl_val* val);
void isl_dump(isl_ast_expr* expr);
void isl_dump(isl_id_list* id_list);
void isl_dump(isl_multi_union_pw_aff *multi_union_pw_aff);
void isl_dump(isl_multi_id *multi_id);
void isl_dump(isl_multi_aff* multi_aff);

#endif //TOPM_ISL_DUMP_H