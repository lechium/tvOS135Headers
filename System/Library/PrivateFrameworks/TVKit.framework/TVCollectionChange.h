/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet;

@interface TVCollectionChange : NSObject {

	unsigned long long _changeKind;
	NSIndexSet* _sourceIndexes;
	NSIndexSet* _destinationIndexes;

}

@property (nonatomic,readonly) unsigned long long changeKind;                     //@synthesize changeKind=_changeKind - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * sourceIndexes;                   //@synthesize sourceIndexes=_sourceIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * destinationIndexes;              //@synthesize destinationIndexes=_destinationIndexes - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)changeKind;
-(id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3 ;
-(NSIndexSet *)sourceIndexes;
-(NSIndexSet *)destinationIndexes;
@end

