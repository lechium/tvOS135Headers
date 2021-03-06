/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>

@class NSURL, NSString;

@interface HFURLItem : HFItem {

	NSURL* _URL;
	NSString* _title;

}

@property (nonatomic,copy) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithTitle:(id)arg1 URL:(id)arg2 ;
@end

