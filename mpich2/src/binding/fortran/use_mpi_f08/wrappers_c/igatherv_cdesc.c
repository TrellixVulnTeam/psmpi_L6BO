/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 *
 * This file is automatically generated by buildiface
 * DO NOT EDIT
 */

#include "cdesc.h"

int MPIR_Igatherv_cdesc(CFI_cdesc_t* x0, int x1, MPI_Datatype x2, CFI_cdesc_t* x3, const int x4[], const int x5[], MPI_Datatype x6, int x7, MPI_Comm x8, MPI_Request * x9)
{
    int err = MPI_SUCCESS;
    void *buf0 = x0->base_addr;
    int count0 = x1;
    MPI_Datatype dtype0 = x2;
    void *buf3 = x3->base_addr;

    if (buf0 == &MPIR_F08_MPI_BOTTOM) {
        buf0 = MPI_BOTTOM;
    } else if (buf0 == &MPIR_F08_MPI_IN_PLACE) {
        buf0 = MPI_IN_PLACE;
    }

    if (buf3 == &MPIR_F08_MPI_BOTTOM) {
        buf3 = MPI_BOTTOM;
    }

    if (x0->rank != 0 && !CFI_is_contiguous(x0)) {
        err = cdesc_create_datatype(x0, x1, x2, &dtype0);
        count0 = 1;
    }

    err = MPI_Igatherv(buf0, count0, dtype0, buf3, x4, x5, x6, x7, x8, x9);

    if (dtype0 != x2)  MPI_Type_free(&dtype0);
    return err;
}
