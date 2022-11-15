class acc_pointer_IR;
// RF
//разные параметры инерции
class rhs_acc_grip_rk2 : acc_pointer_IR
{

	inertia = -0.8;
};

class rhs_acc_grip_rk6 : rhs_acc_grip_rk2
{

	inertia = -0.8;
};

class rhs_acc_grip_ffg2 : rhs_acc_grip_rk6
{

	inertia = -0.8;
};

// US

class rhsusf_acc_grip1 : rhsusf_acc_harris_bipod
{

	inertia = -0.8;
};

class rhsusf_acc_grip2 : rhsusf_acc_grip1
{

	inertia = -0.8;
};

class rhsusf_acc_grip2_tan : rhsusf_acc_grip2
{

	inertia = -0.8;
};

class rhsusf_acc_grip2_wd : rhsusf_acc_grip2
{

	inertia = -0.8;
};

class rhsusf_acc_grip3 : rhsusf_acc_grip2
{

	inertia = -0.8;
};

class rhsusf_acc_grip3_tan : rhsusf_acc_grip3
{

	inertia = -0.8;
};

class rhsusf_acc_grip4 : rhsusf_acc_grip2
{

	inertia = -0.8;
};

class rhsusf_acc_grip4_bipod : rhsusf_acc_grip4
{

	inertia = -0.8;
};

class rhsusf_acc_rvg_blk : rhsusf_acc_grip3
{

	inertia = -0.8;
};

class rhsusf_acc_rvg_de : rhsusf_acc_rvg_blk
{

	inertia = -0.8;
};

class rhsusf_acc_tacsac_blk : rhsusf_acc_grip2
{

	inertia = -0.8;
};

class rhsusf_acc_tacsac_tan : rhsusf_acc_tacsac_blk
{

	inertia = -0.8;
};

class rhsusf_acc_tacsac_blue : rhsusf_acc_tacsac_blk
{

	inertia = -0.8;
};

class rhsusf_acc_tdstubby_blk : rhsusf_acc_grip3
{

	inertia = -0.8;
};

class rhsusf_acc_tdstubby_tan : rhsusf_acc_tdstubby_blk
{

	inertia = -0.8;
};

class rhsusf_acc_kac_grip : rhsusf_acc_grip3
{

	inertia = -0.8;
};

class rhsusf_acc_kac_grip_saw_bipod : rhsusf_acc_kac_grip
{

	inertia = -0.8;
};

class rhsusf_acc_grip_m203_blk : rhsusf_acc_grip2
{

	inertia = -0.8;
};

class rhsusf_acc_grip_m203_d : rhsusf_acc_grip_m203_blk
{

	inertia = -0.8;
};

class rhsusf_acc_grip_m203_wd : rhsusf_acc_grip_m203_blk
{

	inertia = -0.8;
};

class rhs_acc_at4_handler : acc_pointer_IR
{

	inertia = -0.8;
};
