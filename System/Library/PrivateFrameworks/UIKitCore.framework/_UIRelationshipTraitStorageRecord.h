/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITraitCollection, NSSet;

@interface _UIRelationshipTraitStorageRecord : NSObject <NSCoding> {

	UITraitCollection* _traitCollection;
	NSSet* _addedObjects;
	NSSet* _removedObjects;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) NSSet * addedObjects;                             //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSSet * removedObjects;                           //@synthesize removedObjects=_removedObjects - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UITraitCollection *)traitCollection;
-(NSSet *)removedObjects;
-(NSSet *)addedObjects;
-(id)initWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3 ;
@end

