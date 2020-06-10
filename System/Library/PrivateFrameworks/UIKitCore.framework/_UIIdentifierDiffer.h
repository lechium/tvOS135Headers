/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIIdentifierDiffer.h>
@class NSIndexSet, NSSet;


@protocol _UIIdentifierDiffer <NSObject>
@property (nonatomic,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,readonly) NSSet * movePairs; 
@property (nonatomic,readonly) BOOL hasChanges; 
@required
-(BOOL)hasChanges;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedIndexes;
-(NSSet *)movePairs;

@end


@class NSIndexSet, NSSet, NSOrderedSet, NSString;

@interface _UIIdentifierDiffer : NSObject <_UIIdentifierDiffer> {

	NSOrderedSet* _beforeIdentifiers;
	NSOrderedSet* _afterIdentifiers;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _deletedIndexes;
	NSSet* _movePairs;
	BOOL _identifiersAreUnique;

}

@property (nonatomic,readonly) NSOrderedSet * beforeIdentifiers; 
@property (nonatomic,readonly) NSOrderedSet * afterIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,readonly) NSSet * movePairs; 
@property (nonatomic,readonly) BOOL hasChanges; 
-(NSString *)description;
-(BOOL)hasChanges;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedIndexes;
-(id)initWithBeforeIdentifiers:(id)arg1 afterIdentifiers:(id)arg2 ;
-(void)performDiff;
-(NSSet *)movePairs;
-(void)_performDiffWithOptions:(long long)arg1 ;
-(void)_performHeckelDiffWithOptions:(long long)arg1 ;
-(void)_performFoundationDiffWithOptions:(long long)arg1 ;
-(void)performDiffWithOptions:(long long)arg1 ;
-(NSOrderedSet *)beforeIdentifiers;
-(NSOrderedSet *)afterIdentifiers;
@end

