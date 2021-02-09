/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 *
 * This file is automatically generated by buildiface
 * DO NOT EDIT
 */

#include "cdesc.h"

int MPIR_Neighbor_alltoallw_cdesc(CFI_cdesc_t* x0, const int x1[], const MPI_Aint x2[], const MPI_Datatype x3[], CFI_cdesc_t* x4, const int x5[], const MPI_Aint x6[], const MPI_Datatype x7[], MPI_Comm x8)
{
    int err = MPI_SUCCESS;
    void *buf0 = x0->base_addr;
    void *buf4 = x4->base_addr;

    if (buf0 == &MPIR_F08_MPI_BOTTOM) {
        buf0 = MPI_BOTTOM;
    }

    if (buf4 == &MPIR_F08_MPI_BOTTOM) {
        buf4 = MPI_BOTTOM;
    }

    err = MPI_Neighbor_alltoallw(buf0, x1, x2, x3, buf4, x5, x6, x7, x8);

    return err;
}
