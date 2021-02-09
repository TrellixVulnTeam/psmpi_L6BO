!
! Copyright (C) by Argonne National Laboratory
!     See COPYRIGHT in top-level directory
!

subroutine MPI_Win_create_f08ts(base, size, disp_unit, info, comm, win, ierror)
    use, intrinsic :: iso_c_binding, only : c_int
    use :: mpi_f08, only : MPI_Info, MPI_Comm, MPI_Win
    use :: mpi_f08, only : MPI_ADDRESS_KIND
    use :: mpi_c_interface, only : c_Info, c_Comm, c_Win
    use :: mpi_c_interface, only : MPIR_Win_create_cdesc

    implicit none

    type(*), dimension(..), asynchronous :: base
    integer(MPI_ADDRESS_KIND), intent(in) :: size
    integer, intent(in) :: disp_unit
    type(MPI_Info), intent(in) :: info
    type(MPI_Comm), intent(in) :: comm
    type(MPI_Win), intent(out) :: win
    integer, optional, intent(out) :: ierror

    integer(c_int) :: disp_unit_c
    integer(c_Info) :: info_c
    integer(c_Comm) :: comm_c
    integer(c_Win) :: win_c
    integer(c_int) :: ierror_c

    if (c_int == kind(0)) then
        ierror_c = MPIR_Win_create_cdesc(base, size, disp_unit, info%MPI_VAL, comm%MPI_VAL, win%MPI_VAL)
    else
        disp_unit_c = disp_unit
        info_c = info%MPI_VAL
        comm_c = comm%MPI_VAL
        ierror_c = MPIR_Win_create_cdesc(base, size, disp_unit_c, info_c, comm_c, win_c)
        win%MPI_VAL = win_c
    end if

    if (present(ierror)) ierror = ierror_c

end subroutine MPI_Win_create_f08ts
