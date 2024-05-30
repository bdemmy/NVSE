#pragma once
#include "NVSEVisitor.h"

class NVSETreePrinter : public NVSEVisitor {
	int curTab = 0;
	void PrintTabs();

public:
	NVSETreePrinter() = default;

	void VisitNVSEScript(NVSEScript* script) override;
	void VisitBeginStmt(const BeginStmt* stmt) override;
	void VisitFnStmt(FnDeclStmt* stmt) override;
	void VisitVarDeclStmt(const VarDeclStmt* stmt) override;

	void VisitExprStmt(const ExprStmt* stmt) override;
	void VisitForStmt(ForStmt* stmt) override;
	void VisitForEachStmt(ForEachStmt* stmt) override;
	void VisitIfStmt(IfStmt* stmt) override;
	void VisitReturnStmt(ReturnStmt* stmt) override;
	void VisitContinueStmt(ContinueStmt* stmt) override;
	void VisitBreakStmt(BreakStmt* stmt) override;
	void VisitWhileStmt(const WhileStmt* stmt) override;
	void VisitBlockStmt(BlockStmt* stmt) override;

	void VisitAssignmentExpr(AssignmentExpr* expr) override;
	void VisitTernaryExpr(TernaryExpr* expr) override;
	void VisitBinaryExpr(BinaryExpr* expr) override;
	void VisitUnaryExpr(UnaryExpr* expr) override;
	void VisitSubscriptExpr(SubscriptExpr* expr) override;
	void VisitCallExpr(CallExpr* expr) override;
	void VisitGetExpr(GetExpr* expr) override;
	void VisitBoolExpr(BoolExpr* expr) override;
	void VisitNumberExpr(NumberExpr* expr) override;
	void VisitStringExpr(StringExpr* expr) override;
	void VisitIdentExpr(IdentExpr* expr) override;
	void VisitGroupingExpr(GroupingExpr* expr) override;
	void VisitLambdaExpr(LambdaExpr* expr) override;
};