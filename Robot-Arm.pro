TEMPLATE =		app

TARGET =		Robot-Arm


QT +=			opengl

PKGCONFIG += glu


LIBS = -I /usr/local/include -I /usr/include -I /usr/local/lib  -lGL -lglut -lGLU -lGLEW -lm -lphonon

HEADERS = \
    cube.h \
    mainwindow.h \
    myqglwidget.h \
    arm.h \
    include.h \
    point.h \
    segment.h \
    lib/Eigen/src/Cholesky/LDLT.h \
    lib/Eigen/src/Cholesky/LLT.h \
    lib/Eigen/src/Cholesky/LLT_MKL.h \
    lib/Eigen/src/CholmodSupport/CholmodSupport.h \
    lib/Eigen/src/Core/arch/AltiVec/Complex.h \
    lib/Eigen/src/Core/arch/AltiVec/PacketMath.h \
    lib/Eigen/src/Core/arch/Default/Settings.h \
    lib/Eigen/src/Core/arch/NEON/Complex.h \
    lib/Eigen/src/Core/arch/NEON/PacketMath.h \
    lib/Eigen/src/Core/arch/SSE/Complex.h \
    lib/Eigen/src/Core/arch/SSE/MathFunctions.h \
    lib/Eigen/src/Core/arch/SSE/PacketMath.h \
    lib/Eigen/src/Core/products/CoeffBasedProduct.h \
    lib/Eigen/src/Core/products/GeneralBlockPanelKernel.h \
    lib/Eigen/src/Core/products/GeneralMatrixMatrix.h \
    lib/Eigen/src/Core/products/GeneralMatrixMatrix_MKL.h \
    lib/Eigen/src/Core/products/GeneralMatrixMatrixTriangular.h \
    lib/Eigen/src/Core/products/GeneralMatrixMatrixTriangular_MKL.h \
    lib/Eigen/src/Core/products/GeneralMatrixVector.h \
    lib/Eigen/src/Core/products/GeneralMatrixVector_MKL.h \
    lib/Eigen/src/Core/products/Parallelizer.h \
    lib/Eigen/src/Core/products/SelfadjointMatrixMatrix.h \
    lib/Eigen/src/Core/products/SelfadjointMatrixMatrix_MKL.h \
    lib/Eigen/src/Core/products/SelfadjointMatrixVector.h \
    lib/Eigen/src/Core/products/SelfadjointMatrixVector_MKL.h \
    lib/Eigen/src/Core/products/SelfadjointProduct.h \
    lib/Eigen/src/Core/products/SelfadjointRank2Update.h \
    lib/Eigen/src/Core/products/TriangularMatrixMatrix.h \
    lib/Eigen/src/Core/products/TriangularMatrixMatrix_MKL.h \
    lib/Eigen/src/Core/products/TriangularMatrixVector.h \
    lib/Eigen/src/Core/products/TriangularMatrixVector_MKL.h \
    lib/Eigen/src/Core/products/TriangularSolverMatrix.h \
    lib/Eigen/src/Core/products/TriangularSolverMatrix_MKL.h \
    lib/Eigen/src/Core/products/TriangularSolverVector.h \
    lib/Eigen/src/Core/util/BlasUtil.h \
    lib/Eigen/src/Core/util/Constants.h \
    lib/Eigen/src/Core/util/DisableStupidWarnings.h \
    lib/Eigen/src/Core/util/ForwardDeclarations.h \
    lib/Eigen/src/Core/util/Macros.h \
    lib/Eigen/src/Core/util/Memory.h \
    lib/Eigen/src/Core/util/Meta.h \
    lib/Eigen/src/Core/util/MKL_support.h \
    lib/Eigen/src/Core/util/NonMPL2.h \
    lib/Eigen/src/Core/util/ReenableStupidWarnings.h \
    lib/Eigen/src/Core/util/StaticAssert.h \
    lib/Eigen/src/Core/util/XprHelper.h \
    lib/Eigen/src/Core/Array.h \
    lib/Eigen/src/Core/ArrayBase.h \
    lib/Eigen/src/Core/ArrayWrapper.h \
    lib/Eigen/src/Core/Assign.h \
    lib/Eigen/src/Core/Assign_MKL.h \
    lib/Eigen/src/Core/BandMatrix.h \
    lib/Eigen/src/Core/Block.h \
    lib/Eigen/src/Core/BooleanRedux.h \
    lib/Eigen/src/Core/CommaInitializer.h \
    lib/Eigen/src/Core/CoreIterators.h \
    lib/Eigen/src/Core/CwiseBinaryOp.h \
    lib/Eigen/src/Core/CwiseNullaryOp.h \
    lib/Eigen/src/Core/CwiseUnaryOp.h \
    lib/Eigen/src/Core/CwiseUnaryView.h \
    lib/Eigen/src/Core/DenseBase.h \
    lib/Eigen/src/Core/DenseCoeffsBase.h \
    lib/Eigen/src/Core/DenseStorage.h \
    lib/Eigen/src/Core/Diagonal.h \
    lib/Eigen/src/Core/DiagonalMatrix.h \
    lib/Eigen/src/Core/DiagonalProduct.h \
    lib/Eigen/src/Core/Dot.h \
    lib/Eigen/src/Core/EigenBase.h \
    lib/Eigen/src/Core/Flagged.h \
    lib/Eigen/src/Core/ForceAlignedAccess.h \
    lib/Eigen/src/Core/Functors.h \
    lib/Eigen/src/Core/Fuzzy.h \
    lib/Eigen/src/Core/GeneralProduct.h \
    lib/Eigen/src/Core/GenericPacketMath.h \
    lib/Eigen/src/Core/GlobalFunctions.h \
    lib/Eigen/src/Core/IO.h \
    lib/Eigen/src/Core/Map.h \
    lib/Eigen/src/Core/MapBase.h \
    lib/Eigen/src/Core/MathFunctions.h \
    lib/Eigen/src/Core/Matrix.h \
    lib/Eigen/src/Core/MatrixBase.h \
    lib/Eigen/src/Core/NestByValue.h \
    lib/Eigen/src/Core/NoAlias.h \
    lib/Eigen/src/Core/NumTraits.h \
    lib/Eigen/src/Core/PermutationMatrix.h \
    lib/Eigen/src/Core/PlainObjectBase.h \
    lib/Eigen/src/Core/ProductBase.h \
    lib/Eigen/src/Core/Random.h \
    lib/Eigen/src/Core/Redux.h \
    lib/Eigen/src/Core/Ref.h \
    lib/Eigen/src/Core/Replicate.h \
    lib/Eigen/src/Core/ReturnByValue.h \
    lib/Eigen/src/Core/Reverse.h \
    lib/Eigen/src/Core/Select.h \
    lib/Eigen/src/Core/SelfAdjointView.h \
    lib/Eigen/src/Core/SelfCwiseBinaryOp.h \
    lib/Eigen/src/Core/SolveTriangular.h \
    lib/Eigen/src/Core/StableNorm.h \
    lib/Eigen/src/Core/Stride.h \
    lib/Eigen/src/Core/Swap.h \
    lib/Eigen/src/Core/Transpose.h \
    lib/Eigen/src/Core/Transpositions.h \
    lib/Eigen/src/Core/TriangularMatrix.h \
    lib/Eigen/src/Core/VectorBlock.h \
    lib/Eigen/src/Core/VectorwiseOp.h \
    lib/Eigen/src/Core/Visitor.h \
    lib/Eigen/src/Eigen2Support/Geometry/AlignedBox.h \
    lib/Eigen/src/Eigen2Support/Geometry/All.h \
    lib/Eigen/src/Eigen2Support/Geometry/AngleAxis.h \
    lib/Eigen/src/Eigen2Support/Geometry/Hyperplane.h \
    lib/Eigen/src/Eigen2Support/Geometry/ParametrizedLine.h \
    lib/Eigen/src/Eigen2Support/Geometry/Quaternion.h \
    lib/Eigen/src/Eigen2Support/Geometry/Rotation2D.h \
    lib/Eigen/src/Eigen2Support/Geometry/RotationBase.h \
    lib/Eigen/src/Eigen2Support/Geometry/Scaling.h \
    lib/Eigen/src/Eigen2Support/Geometry/Transform.h \
    lib/Eigen/src/Eigen2Support/Geometry/Translation.h \
    lib/Eigen/src/Eigen2Support/Block.h \
    lib/Eigen/src/Eigen2Support/Cwise.h \
    lib/Eigen/src/Eigen2Support/CwiseOperators.h \
    lib/Eigen/src/Eigen2Support/Lazy.h \
    lib/Eigen/src/Eigen2Support/LeastSquares.h \
    lib/Eigen/src/Eigen2Support/LU.h \
    lib/Eigen/src/Eigen2Support/Macros.h \
    lib/Eigen/src/Eigen2Support/MathFunctions.h \
    lib/Eigen/src/Eigen2Support/Memory.h \
    lib/Eigen/src/Eigen2Support/Meta.h \
    lib/Eigen/src/Eigen2Support/Minor.h \
    lib/Eigen/src/Eigen2Support/QR.h \
    lib/Eigen/src/Eigen2Support/SVD.h \
    lib/Eigen/src/Eigen2Support/TriangularSolver.h \
    lib/Eigen/src/Eigen2Support/VectorBlock.h \
    lib/Eigen/src/Eigenvalues/ComplexEigenSolver.h \
    lib/Eigen/src/Eigenvalues/ComplexSchur.h \
    lib/Eigen/src/Eigenvalues/ComplexSchur_MKL.h \
    lib/Eigen/src/Eigenvalues/EigenSolver.h \
    lib/Eigen/src/Eigenvalues/GeneralizedEigenSolver.h \
    lib/Eigen/src/Eigenvalues/GeneralizedSelfAdjointEigenSolver.h \
    lib/Eigen/src/Eigenvalues/HessenbergDecomposition.h \
    lib/Eigen/src/Eigenvalues/MatrixBaseEigenvalues.h \
    lib/Eigen/src/Eigenvalues/RealQZ.h \
    lib/Eigen/src/Eigenvalues/RealSchur.h \
    lib/Eigen/src/Eigenvalues/RealSchur_MKL.h \
    lib/Eigen/src/Eigenvalues/SelfAdjointEigenSolver.h \
    lib/Eigen/src/Eigenvalues/SelfAdjointEigenSolver_MKL.h \
    lib/Eigen/src/Eigenvalues/Tridiagonalization.h \
    lib/Eigen/src/Geometry/arch/Geometry_SSE.h \
    lib/Eigen/src/Geometry/AlignedBox.h \
    lib/Eigen/src/Geometry/AngleAxis.h \
    lib/Eigen/src/Geometry/EulerAngles.h \
    lib/Eigen/src/Geometry/Homogeneous.h \
    lib/Eigen/src/Geometry/Hyperplane.h \
    lib/Eigen/src/Geometry/OrthoMethods.h \
    lib/Eigen/src/Geometry/ParametrizedLine.h \
    lib/Eigen/src/Geometry/Quaternion.h \
    lib/Eigen/src/Geometry/Rotation2D.h \
    lib/Eigen/src/Geometry/RotationBase.h \
    lib/Eigen/src/Geometry/Scaling.h \
    lib/Eigen/src/Geometry/Transform.h \
    lib/Eigen/src/Geometry/Translation.h \
    lib/Eigen/src/Geometry/Umeyama.h \
    lib/Eigen/src/Householder/BlockHouseholder.h \
    lib/Eigen/src/Householder/Householder.h \
    lib/Eigen/src/Householder/HouseholderSequence.h \
    lib/Eigen/src/IterativeLinearSolvers/BasicPreconditioners.h \
    lib/Eigen/src/IterativeLinearSolvers/BiCGSTAB.h \
    lib/Eigen/src/IterativeLinearSolvers/ConjugateGradient.h \
    lib/Eigen/src/IterativeLinearSolvers/IncompleteLUT.h \
    lib/Eigen/src/IterativeLinearSolvers/IterativeSolverBase.h \
    lib/Eigen/src/Jacobi/Jacobi.h \
    lib/Eigen/src/LU/arch/Inverse_SSE.h \
    lib/Eigen/src/LU/Determinant.h \
    lib/Eigen/src/LU/FullPivLU.h \
    lib/Eigen/src/LU/Inverse.h \
    lib/Eigen/src/LU/PartialPivLU.h \
    lib/Eigen/src/LU/PartialPivLU_MKL.h \
    lib/Eigen/src/MetisSupport/MetisSupport.h \
    lib/Eigen/src/misc/blas.h \
    lib/Eigen/src/misc/Image.h \
    lib/Eigen/src/misc/Kernel.h \
    lib/Eigen/src/misc/Solve.h \
    lib/Eigen/src/misc/SparseSolve.h \
    lib/Eigen/src/OrderingMethods/Amd.h \
    lib/Eigen/src/OrderingMethods/Eigen_Colamd.h \
    lib/Eigen/src/OrderingMethods/Ordering.h \
    lib/Eigen/src/PardisoSupport/PardisoSupport.h \
    lib/Eigen/src/PaStiXSupport/PaStiXSupport.h \
    lib/Eigen/src/plugins/ArrayCwiseBinaryOps.h \
    lib/Eigen/src/plugins/ArrayCwiseUnaryOps.h \
    lib/Eigen/src/plugins/BlockMethods.h \
    lib/Eigen/src/plugins/CommonCwiseBinaryOps.h \
    lib/Eigen/src/plugins/CommonCwiseUnaryOps.h \
    lib/Eigen/src/plugins/MatrixCwiseBinaryOps.h \
    lib/Eigen/src/plugins/MatrixCwiseUnaryOps.h \
    lib/Eigen/src/QR/ColPivHouseholderQR.h \
    lib/Eigen/src/QR/ColPivHouseholderQR_MKL.h \
    lib/Eigen/src/QR/FullPivHouseholderQR.h \
    lib/Eigen/src/QR/HouseholderQR.h \
    lib/Eigen/src/QR/HouseholderQR_MKL.h \
    lib/Eigen/src/SparseCholesky/SimplicialCholesky.h \
    lib/Eigen/src/SparseCholesky/SimplicialCholesky_impl.h \
    lib/Eigen/src/SparseCore/AmbiVector.h \
    lib/Eigen/src/SparseCore/CompressedStorage.h \
    lib/Eigen/src/SparseCore/ConservativeSparseSparseProduct.h \
    lib/Eigen/src/SparseCore/MappedSparseMatrix.h \
    lib/Eigen/src/SparseCore/SparseBlock.h \
    lib/Eigen/src/SparseCore/SparseColEtree.h \
    lib/Eigen/src/SparseCore/SparseCwiseBinaryOp.h \
    lib/Eigen/src/SparseCore/SparseCwiseUnaryOp.h \
    lib/Eigen/src/SparseCore/SparseDenseProduct.h \
    lib/Eigen/src/SparseCore/SparseDiagonalProduct.h \
    lib/Eigen/src/SparseCore/SparseDot.h \
    lib/Eigen/src/SparseCore/SparseFuzzy.h \
    lib/Eigen/src/SparseCore/SparseMatrix.h \
    lib/Eigen/src/SparseCore/SparseMatrixBase.h \
    lib/Eigen/src/SparseCore/SparsePermutation.h \
    lib/Eigen/src/SparseCore/SparseProduct.h \
    lib/Eigen/src/SparseCore/SparseRedux.h \
    lib/Eigen/src/SparseCore/SparseSelfAdjointView.h \
    lib/Eigen/src/SparseCore/SparseSparseProductWithPruning.h \
    lib/Eigen/src/SparseCore/SparseTranspose.h \
    lib/Eigen/src/SparseCore/SparseTriangularView.h \
    lib/Eigen/src/SparseCore/SparseUtil.h \
    lib/Eigen/src/SparseCore/SparseVector.h \
    lib/Eigen/src/SparseCore/SparseView.h \
    lib/Eigen/src/SparseCore/TriangularSolver.h \
    lib/Eigen/src/SparseLU/SparseLU.h \
    lib/Eigen/src/SparseLU/SparseLU_column_bmod.h \
    lib/Eigen/src/SparseLU/SparseLU_column_dfs.h \
    lib/Eigen/src/SparseLU/SparseLU_copy_to_ucol.h \
    lib/Eigen/src/SparseLU/SparseLU_gemm_kernel.h \
    lib/Eigen/src/SparseLU/SparseLU_heap_relax_snode.h \
    lib/Eigen/src/SparseLU/SparseLU_kernel_bmod.h \
    lib/Eigen/src/SparseLU/SparseLU_Memory.h \
    lib/Eigen/src/SparseLU/SparseLU_panel_bmod.h \
    lib/Eigen/src/SparseLU/SparseLU_panel_dfs.h \
    lib/Eigen/src/SparseLU/SparseLU_pivotL.h \
    lib/Eigen/src/SparseLU/SparseLU_pruneL.h \
    lib/Eigen/src/SparseLU/SparseLU_relax_snode.h \
    lib/Eigen/src/SparseLU/SparseLU_Structs.h \
    lib/Eigen/src/SparseLU/SparseLU_SupernodalMatrix.h \
    lib/Eigen/src/SparseLU/SparseLU_Utils.h \
    lib/Eigen/src/SparseLU/SparseLUImpl.h \
    lib/Eigen/src/SparseQR/SparseQR.h \
    lib/Eigen/src/SPQRSupport/SuiteSparseQRSupport.h \
    lib/Eigen/src/StlSupport/details.h \
    lib/Eigen/src/StlSupport/StdDeque.h \
    lib/Eigen/src/StlSupport/StdList.h \
    lib/Eigen/src/StlSupport/StdVector.h \
    lib/Eigen/src/SuperLUSupport/SuperLUSupport.h \
    lib/Eigen/src/SVD/JacobiSVD.h \
    lib/Eigen/src/SVD/JacobiSVD_MKL.h \
    lib/Eigen/src/SVD/UpperBidiagonalization.h \
    lib/Eigen/src/UmfPackSupport/UmfPackSupport.h \
    InterpolatePoint.h \
    myInterpolator.h

SOURCES = \
    cube.cpp \
    main.cpp \
    mainwindow.cpp \
    myqglwidget.cpp \
    arm.cpp \
    point.cpp \
    segment.cpp \
    interpolator.cpp \
    InterpolatePoint.cpp \
    myInterpolator.cpp

CONFIG +=\
  release \
  warn_on \
  qt \
  console \
  gui

DESTDIR =		bin
MOC_DIR =		build/moc
UI_DIR =		build/uic
OBJECTS_DIR =	build/obj
RCC_DIR =		build/rcc

FORMS += \
    mainwindow.ui

DISTFILES += \
    picking.pro.user \
    Robot-Arm.pro.user \
    background_music.mp3 \
    player1.jpg \
    player2.jpg
