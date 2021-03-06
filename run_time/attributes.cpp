#include <clang/AST/ASTContext.h>
#include <clang/AST/Attr.h>
#include <clang/Sema/ParsedAttr.h>
#include <clang/Sema/Sema.h>
#include <clang/Sema/SemaDiagnostic.h>
#include <llvm/IR/Attributes.h>
/*
 * a useful attribute [[based]] to print a function is based using clang's ast
 * this supposed to be at compile time, since the compiler prints "function is based" when it sees the based attribute
 * note: works only with clang + a reason to use clang for cuz clang is epik
 * compile instructions: lmfao check the docs
 */

namespace cl = clang;

struct BasedAttr : public cl::ParsedAttrInfo {
    BasedAttr() {
        OptArgs = 1;
        static constexpr Spelling S[] = {
            {cl::ParsedAttr::AS_CXX11, "based"},
            {cl::ParsedAttr::AS_CXX11, "blanc::based"}};
        Spellings = S;
    }
    bool diagAppertainsToDecl(cl::Sema &S, const cl::ParsedAttr &Attr,
                              const cl::Decl *D) const override {
        if (!cl::isa<cl::FunctionDecl>(D)) {
            S.Diag(Attr.getLoc(), cl::diag::err_attribute_wrong_decl_type_str)
                << Attr << "functions";
            return false;
        }
        return true;
    }
    AttrHandling
    handleDeclAttribute(cl::Sema &S, cl::Decl *D,
                        const cl::ParsedAttr &Attr) const override {
        cl::FunctionDecl *F = cl::dyn_cast<cl::FunctionDecl>(D);
        llvm::outs() << "function '" << F->getQualifiedNameAsString()
                     << "' is based but why ?";
        return AttributeApplied;
    }
};

static cl::ParsedAttrInfoRegistry::Add<BasedAttr> X("based", "prints based");
