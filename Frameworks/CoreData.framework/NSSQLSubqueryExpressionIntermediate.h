/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLEntity, NSSQLFetchIntermediate, NSMutableString, NSMutableArray, NSSQLColumn, NSExpression, NSString, NSSQLJoinIntermediate;

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {
    BOOL _allowMoreToMany;
    BOOL _allowTrailingKeypath;
    NSSQLFetchIntermediate *_fetchIntermediate;
    NSSQLEntity *_governingEntityForVariable;
    BOOL _isCount;
    NSMutableArray *_keypathsToPromote;
    BOOL _onlyTrailIsCount;
    NSString *_selectEntityAlias;
    NSMutableString *_selectFromCorrelationTarget;
    NSSQLEntity *_selectFromEntity;
    BOOL _subqueryHasTruePredicate;
    NSExpression *_trailingKeypath;
    BOOL _useDistinct;
    NSString *_variableAlias;
    NSSQLColumn *_variableColumn;
    NSExpression *_variableExpression;
    NSSQLJoinIntermediate *_variableJoin;
}

- (void)_createCollectionJoinsForFetchInContext:(id)arg1;
- (void)_createSelectClauseInFetchWithContext:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2;
- (BOOL)_isKeypathScopedToSubquery:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (void)_setVariableColumn:(id)arg1;
- (void)dealloc;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)initWithExpression:(id)arg1 trailingKeypath:(id)arg2 inScope:(id)arg3;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (void)selectDistinct;

@end
