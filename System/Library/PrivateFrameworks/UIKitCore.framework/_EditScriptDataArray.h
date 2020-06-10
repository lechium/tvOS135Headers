/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_EditScriptData.h>

@class NSArray, NSString;

@interface _EditScriptDataArray : NSObject <_EditScriptData> {

	NSArray* _data;
	NSString* _cachedStringValue;

}

@property (nonatomic,retain) NSArray * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * cachedStringValue;              //@synthesize cachedStringValue=_cachedStringValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2 ;
+(id)EditScriptDataWithArray:(id)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(long long)length;
-(id)initWithArray:(id)arg1 ;
-(id)stringValue;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(id)stringAtIndex:(long long)arg1 ;
-(void)setCachedStringValue:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 chunkSize:(long long)arg2 ;
-(long long)lengthOfItem:(long long)arg1 ;
-(long long)characterIndexForItem:(long long)arg1 ;
-(NSString *)cachedStringValue;
-(long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2 ;
@end
