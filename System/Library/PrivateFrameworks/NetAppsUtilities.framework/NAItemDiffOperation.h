/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NADiffOperation.h>

@class NSIndexPath, NSString;

@interface NAItemDiffOperation : NSObject <NADiffOperation> {

	unsigned long long _type;
	id _item;
	NSIndexPath* _fromIndexPath;
	NSIndexPath* _toIndexPath;

}

@property (nonatomic,readonly) id item;                                           //@synthesize item=_item - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * fromIndexPath;                  //@synthesize fromIndexPath=_fromIndexPath - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * toIndexPath;                    //@synthesize toIndexPath=_toIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * operationDescription; 
+(id)reloadOperationWithItem:(id)arg1 atIndexPath:(id)arg2 ;
+(id)deleteOperationWithItem:(id)arg1 atIndexPath:(id)arg2 ;
+(id)moveOperationWithItem:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
+(id)insertOperationWithItem:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)type;
-(id)item;
-(NSString *)operationDescription;
-(id)_operationDescriptionWithVerboseType:(BOOL)arg1 ;
-(id)initWithOperationType:(unsigned long long)arg1 item:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
-(NSIndexPath *)fromIndexPath;
-(NSIndexPath *)toIndexPath;
@end

