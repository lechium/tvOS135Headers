/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSSQLBindIntarray : NSObject {

	unsigned _index;
	id _value;
	NSString* _tableName;

}

@property (assign,nonatomic) unsigned index;                    //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) id value;                          //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(void)dealloc;
-(id)value;
-(unsigned)index;
-(void)setValue:(id)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(NSString *)tableName;
-(id)initWithValue:(id)arg1 ;
-(void)setTableName:(NSString *)arg1 ;
@end

