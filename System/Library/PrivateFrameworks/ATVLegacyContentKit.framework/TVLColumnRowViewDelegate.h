/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TVColumnRowViewDelegate.h>

@class TVLTableElement, NSString;

@interface TVLColumnRowViewDelegate : NSObject <TVColumnRowViewDelegate> {

	TVLTableElement* _tableElement;

}

@property (retain) TVLTableElement * tableElement;                  //@synthesize tableElement=_tableElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TVLTableElement *)tableElement;
-(void)setTableElement:(TVLTableElement *)arg1 ;
-(id)initWithTableElement:(id)arg1 ;
-(double)headerHeightForColumnRowView:(id)arg1 ;
-(double)columnRowView:(id)arg1 widthForColumn:(long long)arg2 ;
-(double)columnRowView:(id)arg1 heightForRow:(long long)arg2 ;
@end

