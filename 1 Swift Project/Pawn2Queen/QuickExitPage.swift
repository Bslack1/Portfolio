//
//  ContentView2.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/31/22.
//  Quick Exit Page - One click of quick exit button will return user to this page. 

import SwiftUI

struct QuickExitPage: View {
    var body: some View {
       NavigationStack{
            Spacer()
            QuickExitArt()
            MainMenuButton()
        }
    }
}

struct QuickExitPage_Previews: PreviewProvider {
    static var previews: some View {
        QuickExitPage()
    }
}
