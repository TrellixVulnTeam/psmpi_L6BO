/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

#include "mpidimpl.h"
#include "gpu_post.h"

int MPIDI_GPU_mpi_init_hook(int rank, int size, int *tag_bits)
{
    return MPI_SUCCESS;
}

int MPIDI_GPU_mpi_finalize_hook(void)
{
    return MPI_SUCCESS;
}
