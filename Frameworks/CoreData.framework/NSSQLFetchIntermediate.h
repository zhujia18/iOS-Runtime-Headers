/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSSQLGroupByIntermediate, NSSQLWhereIntermediate, NSSQLOffsetIntermediate, NSSQLHavingIntermediate, NSMutableSet, NSSQLSelectIntermediate, NSSQLOrderIntermediate, NSString, NSSQLEntity, NSSQLLimitIntermediate, NSMutableArray;

@interface NSSQLFetchIntermediate : NSSQLIntermediate {
    NSString *_correlationToken;
    NSString *_governingAlias;
    NSSQLEntity *_governingEntity;
    NSSQLGroupByIntermediate *_groupByClause;
    NSMutableSet *_groupByKeypaths;
    NSSQLHavingIntermediate *_havingClause;
    NSMutableArray *_joinIntermediates;
    NSMutableDictionary *_joinKeypaths;
    NSSQLLimitIntermediate *_limitClause;
    NSSQLOffsetIntermediate *_offsetClause;
    NSSQLOrderIntermediate *_orderIntermediate;
    NSSQLSelectIntermediate *_selectClause;
    NSSQLWhereIntermediate *_whereClause;
}

- (id)_generateJoinSQLStringInContext:(id)arg1;
- (void)addGroupByKeypath:(id)arg1;
- (void)addJoinIntermediate:(id)arg1 atKeypathWithComponents:(id)arg2;
- (void)dealloc;
- (id)fetchIntermediate;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)finalJoinForKeypathWithComponents:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)governingAlias;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)governingEntity;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (BOOL)groupByClauseContainsKeypath:(id)arg1;
- (id)groupByIntermediate;
- (id)havingIntermediate;
- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;
- (id)initWithScope:(id)arg1;
- (id)joinIntermediates;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)limitIntermediate;
- (void)promoteToOuterJoinAtKeypathWithComponents:(id)arg1;
- (void)promoteToOuterJoinsAlongKeypathWithComponents:(id)arg1;
- (void)selectDistinct;
- (id)selectIntermediate;
- (void)setCorrelationToken:(id)arg1;
- (void)setGoverningAlias:(id)arg1;
- (void)setGoverningEntity:(id)arg1;
- (void)setGroupByIntermediate:(id)arg1;
- (void)setHavingIntermediate:(id)arg1;
- (void)setLimitIntermediate:(id)arg1;
- (void)setOffsetIntermediate:(id)arg1;
- (void)setOrderIntermediate:(id)arg1;
- (void)setSelectIntermediate:(id)arg1;
- (void)setWhereIntermediate:(id)arg1;

@end
